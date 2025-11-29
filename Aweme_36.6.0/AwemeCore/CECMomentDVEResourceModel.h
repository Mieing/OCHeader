@class NSString, NSArray, NSURL, UIImage, NSNumber;

@interface CECMomentDVEResourceModel : NSObject <DVEResourceModelProtocol>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *sourcePath;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) UIImage *assetImage;
@property (nonatomic) unsigned long long resourceTag;
@property (nonatomic) BOOL overlap;
@property (retain, nonatomic) NSNumber *intensity;
@property (retain, nonatomic) UIImage *highlightImage;
@property (copy, nonatomic) NSArray *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadModel:(id /* block */)a0;
- (void)downloadModel:(id /* block */)a0 progress:(id /* block */)a1;
- (void)downloadModelWithCompletion:(id /* block */)a0 progress:(id /* block */)a1;
- (void).cxx_destruct;
- (unsigned long long)status;

@end
