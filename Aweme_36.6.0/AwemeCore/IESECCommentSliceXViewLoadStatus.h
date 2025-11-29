@class NSError, UIView;

@interface IESECCommentSliceXViewLoadStatus : NSObject

@property (retain, nonatomic) UIView *sliceXView;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isAsyncLoaded;

- (void).cxx_destruct;

@end
