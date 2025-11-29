@class NSString;

@interface AWELiveUploadMediaVideoResultListModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *coverUri;
@property (copy, nonatomic) NSString *videoMediaInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
