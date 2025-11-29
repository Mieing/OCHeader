@class NSURL, NSString;

@interface AEKEditMediaGenreResourceLivephotoModel : NSObject <AEKEditMediaGenreResourceModel>

@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSURL *videoURL;
@property (nonatomic) unsigned long long mediaGenre;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImageURL:(id)a0 videoURL:(id)a1;
- (void).cxx_destruct;

@end
