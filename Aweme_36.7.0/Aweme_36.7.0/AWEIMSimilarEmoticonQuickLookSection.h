@class NSArray, NSString;

@interface AWEIMSimilarEmoticonQuickLookSection : NSObject <AWEIMBaseCollectionViewSectionConfigProtocol>

@property (copy, nonatomic) NSArray *dataSources;
@property (retain, nonatomic) id context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseCellIdentifier;
+ (id)reuseHeaderIdentifier;
+ (id)reuseSectonIdentifier;
+ (id)reuseFooterIdentifier;

- (void).cxx_destruct;
- (id)init;

@end
