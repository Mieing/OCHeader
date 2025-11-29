@class NSString, IESMMCanvasSource, ACCRepositoryWorkspace;
@protocol ACCEditServiceProtocol;

@interface AWEPublishMergeImageOperation : NSObject

@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } newCanvasSize;
@property (nonatomic) struct CGSize { double width; double height; } originCanvasSize;
@property (nonatomic) struct CGSize { double width; double height; } exportSize;
@property (retain, nonatomic) IESMMCanvasSource *originCanvasSource;
@property (nonatomic) long long imageIndex;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (nonatomic) struct CGSize { double width; double height; } externalCanvasSize;
@property (nonatomic) BOOL isLivePhotoFirstFrame;
@property (nonatomic) long long retryCount;
@property (readonly, nonatomic) NSString *operationID;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCRepositoryWorkspace *workspace;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
