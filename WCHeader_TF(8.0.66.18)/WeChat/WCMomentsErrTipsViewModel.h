@class WCDataItem, NSString, WCCommentItem;

@interface WCMomentsErrTipsViewModel : NSObject

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCCommentItem *comment;
@property (nonatomic) long long tipType;
@property (nonatomic) BOOL isDetail;
@property (readonly, nonatomic) NSString *errTips;
@property (readonly, nonatomic) NSString *customTips;
@property (readonly, nonatomic) BOOL isTipsForFold;
@property (readonly, nonatomic) BOOL isCustomTipsForComment;
@property (readonly, nonatomic) unsigned long long uploadErrType;
@property (readonly, nonatomic) BOOL isSecurityVerified;

- (id)initWithDataItem:(id)a0;
- (id)initWithDataItem:(id)a0 comment:(id)a1 tipType:(long long)a2 isDetail:(BOOL)a3;
- (void)updateWithDataItem:(id)a0 comment:(id)a1;
- (void)configTips;
- (id)genErrTipsForDetail;
- (id)genCustomTipsForDetail;
- (id)errTipsAccessibilityText;
- (void).cxx_destruct;

@end
