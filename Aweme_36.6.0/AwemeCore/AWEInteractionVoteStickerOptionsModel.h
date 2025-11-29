@class NSString, NSNumber;

@interface AWEInteractionVoteStickerOptionsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *optionText;
@property (retain, nonatomic) NSNumber *optionID;
@property (nonatomic) long long voteCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
