@class NSString, NSNumber;

@interface AWELVideoHighLight : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *highlightEpisodeId;
@property (copy, nonatomic) NSString *highlightItemId;
@property (retain, nonatomic) NSNumber *startTimeMsec;
@property (retain, nonatomic) NSNumber *endTimeMsec;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *highlightTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
