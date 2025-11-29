@class NSString;

@interface AWEECOMIMMsgReferenceVideoModel : AWEECOMIMMsgReferenceModel

@property (nonatomic) double coverWidth;
@property (nonatomic) double coverHeight;
@property (copy, nonatomic) NSString *coverImgURL;
@property (copy, nonatomic) NSString *vid;
@property (nonatomic) double duration;

- (void).cxx_destruct;
- (id)init;

@end
