@class NSString, NSArray, AWEIMFansGroupModel;

@interface AWEIMFansGroupGuestItemViewModel : NSObject

@property (retain, nonatomic) NSString *groupMemberDesc;
@property (retain, nonatomic) NSString *entryLimitDesc;
@property (retain, nonatomic) NSString *infoDesc;
@property (retain, nonatomic) NSString *joinButtonTitle;
@property (nonatomic) BOOL joinButtonEnable;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) double labelTopMargin;
@property (copy, nonatomic) NSArray *groupTags;
@property (retain, nonatomic) AWEIMFansGroupModel *model;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
