@class NSDictionary, NSString;

@interface IESVideoDetectOutputModel : NSObject

@property (copy, nonatomic) NSDictionary *formattedDict;
@property (copy, nonatomic) NSString *assetClazz;
@property (copy, nonatomic) NSDictionary *debugExtraDict;

- (id)sortedFormattedKeys;
- (void)makeOutput:(id /* block */)a0;
- (void).cxx_destruct;

@end
