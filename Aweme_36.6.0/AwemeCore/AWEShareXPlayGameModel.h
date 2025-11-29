@class NSString, NSDictionary;

@interface AWEShareXPlayGameModel : NSObject

@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *gameIcon;
@property (copy, nonatomic) NSString *gameLoadingImage;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameSchema;
@property (retain, nonatomic) NSString *imMsgContent;
@property (retain, nonatomic) NSDictionary *qrCodeParams;
@property (nonatomic) BOOL isLandScape;
@property (copy, nonatomic) id /* block */ itemClickHandler;

- (void).cxx_destruct;

@end
