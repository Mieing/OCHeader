@class NSArray, NSString, NSURL, UIImage, BDBaseTransformer, BDPreviewHashConfig;

@interface AWESearchImageViewConfig : NSObject

@property (copy, nonatomic) NSArray *imageUrlArray;
@property (copy, nonatomic) NSURL *imageUrl;
@property (retain, nonatomic) UIImage *placeholder;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *cacheName;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (retain, nonatomic) BDBaseTransformer *transformer;
@property (nonatomic) struct CGSize { double width; double height; } sizeLimit;
@property (nonatomic) unsigned long long memoryLimit;
@property (retain, nonatomic) BDPreviewHashConfig *previewHashConfig;
@property (nonatomic) long long viewModelIndex;
@property (copy, nonatomic) NSString *monitorTag;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *pageTag;

- (void)_initializeParams;
- (void).cxx_destruct;
- (id)init;

@end
