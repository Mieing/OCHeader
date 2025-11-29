@class NSString;

@interface MJShootRedPacketTransParams : NSObject

@property (readonly, nonatomic) NSString *templateID;
@property (readonly, nonatomic) int cdnAppType;
@property (readonly, nonatomic) int enterScene;
@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) BOOL notUseCache;
@property (readonly, nonatomic) int postScene;
@property (readonly, nonatomic) NSString *postSessionID;
@property (readonly, nonatomic) NSString *postCoverID;

- (id)initWithTemplateID:(id)a0 cdnAppType:(int)a1 enterScene:(int)a2 action:(int)a3 notUseCache:(BOOL)a4 postScene:(int)a5 postSessionID:(id)a6 postCoverID:(id)a7;
- (id)description;
- (void).cxx_destruct;

@end
