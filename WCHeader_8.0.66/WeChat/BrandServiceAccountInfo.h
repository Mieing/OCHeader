@class NSNumber, BrandServiceContactInfo;

@interface BrandServiceAccountInfo : NSObject

@property (retain, nonatomic) BrandServiceContactInfo *contactInfo;
@property (retain, nonatomic) NSNumber *hasUnreadDot;
@property (retain, nonatomic) NSNumber *lastMsgTime;

+ (id)makeWithContactInfo:(id)a0 hasUnreadDot:(id)a1 lastMsgTime:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
