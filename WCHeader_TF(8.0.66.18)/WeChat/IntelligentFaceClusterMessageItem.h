@class NSString;

@interface IntelligentFaceClusterMessageItem : MMObject

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) long long faceLabelId;
@property (nonatomic) float zScore;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRect;
@property (retain, nonatomic) NSString *mediaFilePath;

- (void)copyFieldFromDbFaceClusterMessageItem:(id)a0;
- (void).cxx_destruct;

@end
