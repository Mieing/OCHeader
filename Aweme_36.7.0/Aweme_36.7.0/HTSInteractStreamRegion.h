@class NSNumber, NSString, NSDictionary;

@interface HTSInteractStreamRegion : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *w;
@property (retain, nonatomic) NSNumber *h;
@property (retain, nonatomic) NSNumber *x;
@property (retain, nonatomic) NSNumber *y;
@property (retain, nonatomic) NSNumber *userid;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *talk;
@property (retain, nonatomic) NSNumber *uid;
@property (retain, nonatomic) NSNumber *muteAudio;
@property (retain, nonatomic) NSString *strUID;
@property (retain, nonatomic) NSNumber *p;
@property (retain, nonatomic) NSNumber *loading;
@property (retain, nonatomic) NSNumber *visible;
@property (retain, nonatomic) NSNumber *isAudio;
@property (retain, nonatomic) NSNumber *wType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
