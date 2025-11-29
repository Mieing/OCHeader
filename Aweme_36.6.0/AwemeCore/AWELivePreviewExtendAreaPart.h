@class NSString, AWEURLModel;

@interface AWELivePreviewExtendAreaPart : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long fontSize;
@property (nonatomic) long long interval;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL cuttable;
@property (nonatomic) BOOL deleted;
@property (retain, nonatomic) NSString *fontColor;
@property (nonatomic) BOOL bold;
@property (retain, nonatomic) AWEURLModel *image;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) AWEURLModel *leftImage;
@property (nonatomic) BOOL fontShouldScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
