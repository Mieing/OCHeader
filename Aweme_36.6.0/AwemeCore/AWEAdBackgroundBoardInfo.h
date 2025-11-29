@class NSString, AWEAdPhraseTextInfo, NSArray;

@interface AWEAdBackgroundBoardInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long boardType;
@property (copy, nonatomic) NSString *boardImageUrl;
@property (retain, nonatomic) AWEAdPhraseTextInfo *phraseInfo;
@property (copy, nonatomic) NSArray *tags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
