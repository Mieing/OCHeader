@class NSMutableDictionary;

@interface IESGCPImageUploadTask : NSObject

@property (retain, nonatomic) NSMutableDictionary *uploadResult;
@property (copy, nonatomic) id /* block */ onCompletion;
@property (copy, nonatomic) id /* block */ singleImageCompletion;

- (void).cxx_destruct;

@end
