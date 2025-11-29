@class NSString, NSNumber, NSDictionary;

@interface AWEUGPendantConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL canCloseExpandedPendant;
@property (nonatomic) BOOL canCloseFoldedPendant;
@property (nonatomic) BOOL enableFold;
@property (nonatomic) BOOL enableFoldedPendantRouter;
@property (copy, nonatomic) NSString *routerURL;
@property (retain, nonatomic) NSNumber *expandedLoopStart;
@property (retain, nonatomic) NSNumber *expandedLoopEnd;
@property (retain, nonatomic) NSNumber *foldLoopStart;
@property (retain, nonatomic) NSNumber *foldLoopEnd;
@property (nonatomic) BOOL closeFoldEnable;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
