@class RTVEffectGameExtraModel, NSString, NSArray, IESEffectModel;

@interface RTVEffectGameModel : NSObject

@property (readonly, nonatomic) IESEffectModel *model;
@property (readonly, nonatomic) RTVEffectGameExtraModel *extra;
@property (readonly, copy, nonatomic) NSString *gameIdentifier;
@property (readonly, copy, nonatomic) NSString *gameName;
@property (readonly, copy, nonatomic) NSString *readableGameName;
@property (readonly, copy, nonatomic) NSString *gameSubtitle;
@property (readonly, copy, nonatomic) NSArray *iconURLStrings;
@property (readonly, copy, nonatomic) NSString *backgroundURLString;
@property (readonly, nonatomic) BOOL needCamera;
@property (readonly, nonatomic) unsigned long long minPlayerCount;
@property (readonly, copy, nonatomic) NSString *invokeUserID;

+ (id)modelWithEffect:(id)a0;
+ (id)modelWithResponseGameInfo:(id)a0;

- (id)effectModel;
- (void)updateEffectModel:(id)a0;
- (id)initWithResponseGameInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithEffect:(id)a0;

@end
