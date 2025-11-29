@class NSArray, NSString, NSMutableArray;

@interface FBSDKAppEventsState : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_mutableEvents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *events;
@property (readonly, nonatomic) unsigned long long numSkipped;
@property (readonly, copy, nonatomic) NSString *tokenString;
@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, nonatomic, getter=areAllEventsImplicit) BOOL allEventsImplicit;

- (id)initWithToken:(id)a0 appID:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addEventsFromAppEventState:(id)a0;
- (void)addEvent:(id)a0 isImplicit:(BOOL)a1;
- (id)extractReceiptData;
- (BOOL)isCompatibleWithAppEventsState:(id)a0;
- (BOOL)isCompatibleWithTokenString:(id)a0 appID:(id)a1;
- (id)JSONStringForEvents:(BOOL)a0;
- (void).cxx_destruct;

@end
