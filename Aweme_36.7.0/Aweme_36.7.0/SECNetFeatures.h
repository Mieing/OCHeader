@class NSString;
@protocol SECNetFeatureProtocol;

@interface SECNetFeatures : NSObject <SECNetFeatureProtocol> {
    id<SECNetFeatureProtocol> _customFeature;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)purifiedURL:(id)a0 andPath:(id)a1;
+ (id)dataTagsFor:(id)a0;
+ (id)tagsFor:(id)a0 with:(id)a1;
+ (id)tagsWithTarget:(id)a0;
+ (id)tagsWithTarget:(id)a0 depth:(unsigned long long)a1;
+ (id)disassembleHost:(id)a0;
+ (id)sharedFeatures;

- (BOOL)is3rdPartyHost:(id)a0;
- (BOOL)isZijieAPI:(id)a0 withPath:(id)a1;
- (BOOL)_isZijieAPI:(id)a0 withPath:(id)a1;
- (void)setupWithFeatures:(id)a0;
- (void).cxx_destruct;

@end
