@class NSString, NSNumber, NSDate;
@protocol CSJAd;

@interface CSJAdCallListenModel : NSObject

@property (retain, nonatomic) id<CSJAd> adModel;
@property (copy, nonatomic) NSString *position;
@property (retain, nonatomic) NSDate *dailTime;
@property (retain, nonatomic) NSNumber *dailActionType;
@property (nonatomic) BOOL isWebCall;
@property (nonatomic) BOOL toListen;

- (void).cxx_destruct;
- (id)init;

@end
