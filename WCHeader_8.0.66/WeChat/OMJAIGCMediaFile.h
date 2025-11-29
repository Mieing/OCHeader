@class NSString;

@interface OMJAIGCMediaFile : NSObject

@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *mediaFileURL;

- (id)initWithMediaType:(unsigned long long)a0 mediaFileURL:(id)a1;
- (void).cxx_destruct;

@end
