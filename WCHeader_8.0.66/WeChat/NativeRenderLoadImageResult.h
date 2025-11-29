@class NSString;

@interface NativeRenderLoadImageResult : NSObject

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (retain, nonatomic) NSString *errMsg;

- (void).cxx_destruct;

@end
