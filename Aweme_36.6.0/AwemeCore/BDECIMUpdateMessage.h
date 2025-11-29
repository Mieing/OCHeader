@class NSNumber, NSString;

@interface BDECIMUpdateMessage : NSObject <BDECIMImageUpdateMessage, BDECIMVideoUpdateMessage>

@property (retain, nonatomic) NSNumber *statusNumber;
@property (copy, nonatomic) NSString *imageUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *videoCoverUrl;

- (void).cxx_destruct;

@end
