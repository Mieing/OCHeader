@class NSString, NSMutableArray, NSDictionary;

@interface IESLiveStreamPictureRecognitionResultModel : NSObject

@property (copy, nonatomic) NSString *entry;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *imgData;
@property (nonatomic) long long type;
@property (nonatomic) double ratio;
@property (nonatomic) BOOL isCrop;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSDictionary *extra;

- (id)cropImage:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateResultWithBoundingBox:(id)a0 yOffset:(double)a1 boundingSize:(struct CGSize { double x0; double x1; })a2 scaleRate:(double)a3 threshold:(double)a4 maxLength:(double)a5;
- (id)initResultModelWithImage:(id)a0 serverResult:(id)a1 scene:(long long)a2 entry:(id)a3;
- (void).cxx_destruct;
- (id)jsonObject;

@end
