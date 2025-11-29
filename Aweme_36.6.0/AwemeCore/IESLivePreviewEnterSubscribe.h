@class NSString;

@interface IESLivePreviewEnterSubscribe : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ previewEnterComplete;

- (void).cxx_destruct;

@end
