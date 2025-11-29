@class NSDictionary;

@interface AFDUserRelationTagLabel : UILabel

@property (retain, nonatomic) NSDictionary *friendUIConfig;
@property (retain, nonatomic) NSDictionary *closeFriendUIConfig;
@property (nonatomic) BOOL enableNewUI;

+ (id)getColorWithColorStr:(id)a0;

- (void)updateLabelWithUserID:(id)a0 scene:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
