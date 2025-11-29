@class NSString, BoundingBox;

@interface RecognitionBox : IESLivePBBaseMessage

@property (retain, nonatomic) BoundingBox *boundingBox;
@property (nonatomic) BOOL hasBoundingBox;
@property (nonatomic) int scene;
@property (nonatomic) int bindingId;
@property (copy, nonatomic) NSString *detailPayload;

+ (id)descriptor;

@end
