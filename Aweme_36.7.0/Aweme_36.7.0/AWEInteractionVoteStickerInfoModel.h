@class NSString, NSNumber, NSArray;

@interface AWEInteractionVoteStickerInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *question;
@property (retain, nonatomic) NSNumber *voteID;
@property (retain, nonatomic) NSNumber *refID;
@property (nonatomic) long long refType;
@property (retain, nonatomic) NSArray *options;
@property (retain, nonatomic) NSNumber *selectOptionID;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)optionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
