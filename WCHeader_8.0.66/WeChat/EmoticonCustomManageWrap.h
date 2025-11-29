@class CEmoticonWrap;

@interface EmoticonCustomManageWrap : NSObject

@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL isReverseSelecting;
@property (nonatomic) BOOL reverseSelectingStatus;
@property (nonatomic) BOOL showingSelectStatus;
@property (nonatomic) unsigned long long selectIndex;
@property (nonatomic) unsigned long long reverseSelectIndex;
@property (nonatomic) unsigned long long temporarySelectOffset;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;
@property (nonatomic) BOOL isMarked;
@property (nonatomic) BOOL isSelecting;
@property (nonatomic) BOOL isMoving;
@property (readonly, nonatomic) BOOL shouldShowMark;
@property (readonly, nonatomic) BOOL shouldShowIndex;
@property (readonly, nonatomic) BOOL shouldShowSelectMask;
@property (readonly, nonatomic) unsigned long long showingSelectIndex;
@property (nonatomic) BOOL needDoFlashAnimation;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL didShowReverseSelectResult;

- (id)init;
- (void).cxx_destruct;

@end
