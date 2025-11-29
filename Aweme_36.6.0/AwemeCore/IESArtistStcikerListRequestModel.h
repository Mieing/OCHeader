@class NSString;

@interface IESArtistStcikerListRequestModel : IESArtistStcikerCommonRequestModel

@property (nonatomic) long long categoryId;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *imageUri;
@property (nonatomic) long long source;

- (void).cxx_destruct;

@end
