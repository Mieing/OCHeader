@class NSString, NSDictionary;

@interface WCFinderLiveOnPromoteBubbleActionExtraInfo : NSObject <WCFinderLiveOnPromoteBubbleActionExtraInfoProvider>

@property (copy, nonatomic) NSString *extra;
@property (readonly, copy, nonatomic) id /* block */ extra_link;
@property (nonatomic) BOOL isFromDetailNotice;
@property (readonly, copy, nonatomic) id /* block */ isFromDetailNotice_link;
@property (copy, nonatomic) NSString *idOfCouponBindToNotice;
@property (readonly, copy, nonatomic) id /* block */ idOfCouponBindToNotice_link;
@property (nonatomic) unsigned int entranceType;
@property (readonly, copy, nonatomic) id /* block */ entranceType_link;
@property (retain, nonatomic) NSDictionary *otherActionResults;
@property (readonly, copy, nonatomic) id /* block */ otherActionResults_link;
@property (nonatomic) unsigned int liveType;
@property (readonly, copy, nonatomic) id /* block */ liveType_link;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extra:(id)a0;

- (id)onPromoteBubbleActionExtraInfo;
- (void).cxx_destruct;

@end
