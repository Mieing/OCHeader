@class NSString;

@interface WAImageUploadInfo : NSObject

@property (copy, nonatomic) NSString *uploadingKey;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
