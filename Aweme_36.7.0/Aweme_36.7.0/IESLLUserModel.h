@class NSString, NSNumber, IESLLifeURLModel;

@interface IESLLUserModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSNumber *roomID;
@property (readonly, nonatomic) IESLLifeURLModel *roomCover;
@property (readonly, nonatomic) NSString *roomTypeTag;
@property (retain, nonatomic) IESLLifeURLModel *avatarLarger;
@property (retain, nonatomic) IESLLifeURLModel *avatarThumb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithJSONDictionary:(id)a0;
+ (void)runOnceForLazyRegister;
+ (id)avatarThumbJSONTransformer;
+ (id)roomCoverJSONTransformer;
+ (id)roomIDJSONTransformer;
+ (id)avatarLargerJSONAdapter;
+ (id)registeredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
