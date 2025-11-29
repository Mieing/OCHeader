@class NSArray, NSDictionary;

@interface OMJAIGCResponseAsset : NSObject

@property (copy, nonatomic) NSArray *mediaFiles;
@property (nonatomic) unsigned long long spliceType;
@property (copy, nonatomic) NSDictionary *extraParams;

- (id)initWithMediaFiles:(id)a0 spliceType:(unsigned long long)a1 extraParams:(id)a2;
- (void).cxx_destruct;

@end
