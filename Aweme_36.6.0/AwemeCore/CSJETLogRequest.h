@interface CSJETLogRequest : CSJAdNetworkRequest

@property (nonatomic) BOOL isV3Data;

- (id)requestHeaderFieldValueDictionary;
- (id)generatedHeaderField;

@end
