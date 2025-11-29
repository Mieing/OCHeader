@class NSArray, AWEProgressThumbUIConfig;

@interface AWEProgressPreviewViewStatusUIConfig : NSObject

@property (copy, nonatomic) NSArray *bigThumbs;
@property (retain, nonatomic) AWEProgressThumbUIConfig *thumbNormalConfig;
@property (retain, nonatomic) AWEProgressThumbUIConfig *thumbActiveConfig;
@property (retain, nonatomic) AWEProgressThumbUIConfig *thumbDraggingConfig;
@property (retain, nonatomic) AWEProgressThumbUIConfig *thumbStableConfig;

- (void).cxx_destruct;

@end
