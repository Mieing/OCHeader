@class NSString, BoundingBox;

@interface IESLiveStreamPictureRecognitionResultItemInfo : NSObject

@property (nonatomic) long long bindingId;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *imgData;
@property (retain, nonatomic) BoundingBox *boundingBox;
@property (copy, nonatomic) NSString *detail;

- (void).cxx_destruct;
- (id)jsonObject;

@end
