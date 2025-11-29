@class NSString, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveTextElementModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *textColor;
@property (nonatomic) double textFontSize;
@property (nonatomic) BOOL needBoldText;
@property (retain, nonatomic) IESECLiveImageURLModel *textBgImage;
@property (nonatomic) BOOL ellipsis;
@property (retain, nonatomic) NSNumber *maxWidth;
@property (nonatomic) long long fontType;
@property (nonatomic) double fontWeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateWithMsg:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
