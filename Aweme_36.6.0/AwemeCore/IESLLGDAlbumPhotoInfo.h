@class NSString, NSNumber;

@interface IESLLGDAlbumPhotoInfo : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *picID;
@property (copy, nonatomic) NSString *optimizedUrl;
@property (nonatomic) long long source;
@property (retain, nonatomic) NSNumber *picQualityConfidence;
@property (copy, nonatomic) NSString *picSource;
@property (copy, nonatomic) NSString *nameForShow;
@property (copy, nonatomic) NSString *logParams;
@property (nonatomic) long long picOrder;
@property (nonatomic) long long tabIndex;
@property (nonatomic) BOOL hasTrackShowEvent;
@property (copy, nonatomic) NSString *parentTabName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
