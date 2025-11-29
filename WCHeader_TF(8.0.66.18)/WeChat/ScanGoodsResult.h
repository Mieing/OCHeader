@class NSString, UIImage, NSData;
@protocol ScanGoodsResultProtocol;

@interface ScanGoodsResult : NSObject

@property (retain, nonatomic) NSString *session;
@property (retain, nonatomic) NSString *action;
@property (nonatomic) long long biz;
@property (retain, nonatomic) UIImage *oriImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizeRect;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *imageUrl;
@property (nonatomic) long long categoryId;
@property (retain, nonatomic) NSData *extraInfo;
@property (weak, nonatomic) id<ScanGoodsResultProtocol> delegate;

+ (long long)mapFromAction:(id)a0;

- (void).cxx_destruct;

@end
