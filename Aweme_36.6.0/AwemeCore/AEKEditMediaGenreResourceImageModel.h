@class NSURL, NSString;

@interface AEKEditMediaGenreResourceImageModel : NSObject <AEKEditMediaGenreResourceModel>

@property (retain, nonatomic) NSURL *imageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithImageURL:(id)a0;

@end
