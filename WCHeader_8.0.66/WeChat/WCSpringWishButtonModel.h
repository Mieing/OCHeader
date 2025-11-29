@class WCDataItem, WCSNSMessage;

@interface WCSpringWishButtonModel : NSObject

@property (nonatomic) BOOL isSpringWished;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCSNSMessage *message;
@property (nonatomic) double maxWidth;

- (void).cxx_destruct;

@end
