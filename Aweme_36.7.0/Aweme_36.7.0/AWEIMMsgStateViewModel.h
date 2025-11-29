@class NSString, NSArray, NSAttributedString;

@interface AWEIMMsgStateViewModel : NSObject <NSCopying>

@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL hasRead;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) BOOL shouldAnimateRotation;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSArray *readedUserAvatars;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } iconFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sendingProgressFrame;
@property (nonatomic) BOOL hidden;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *messageID;
@property (nonatomic) BOOL asyncUpdateFinished;
@property (nonatomic) BOOL isGroupMesseageAndReadBySomeone;

+ (BOOL)enableSendingProgressForMessage:(id)a0;
+ (id)modelForMsg:(id)a0 readStateEnable:(BOOL)a1;

- (id)modelWithModifiedAttributedText:(id)a0;
- (void)computeLayout;
- (void)assembleReachStateViewModelByMsgState:(long long)a0;
- (void)assembleReadStateViewModelByMsg:(id)a0;
- (void)generateReadedAvatarURLListFrom:(id)a0;
- (void)configOptions:(id)a0;
- (void)configWatchOnceMessageStateInfo:(id)a0;
- (id)__limtedDisplayNameWithReadReceiptFinishCount:(long long)a0 message:(id)a1;
- (id)initWithMsg:(id)a0 readStateEnable:(BOOL)a1;
- (id)detailLogInfo;
- (void).cxx_destruct;
- (id)textAttributes;
- (id)description;
- (id)init;
- (id)attributedStringForText:(id)a0;
- (void)commonInit;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
