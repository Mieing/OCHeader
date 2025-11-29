@class NSString, NSArray, NSDictionary, NSMutableDictionary, TSTrackedItem;
@protocol TSFinalTrackedItem;

@interface TSRecord : NSObject <NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSString *userIdentifier;
@property (nonatomic) unsigned long long interfaceType;
@property (nonatomic) unsigned long long segmentIdentifier;
@property (nonatomic) long long positionCode;
@property (retain, nonatomic) NSString *passcodeContext;
@property (nonatomic) unsigned long long passcodeType;
@property (nonatomic) unsigned long long ownerQueryType;
@property (nonatomic) unsigned long long ownerPredictionResult;
@property (nonatomic) unsigned long long ownerReport;
@property (retain, nonatomic) NSString *attacker;
@property (retain, nonatomic) NSString *command;
@property (retain, nonatomic) NSArray *splitingPoints;
@property (retain, nonatomic) NSString *userHeight;
@property (retain, nonatomic) NSString *userWeight;
@property (retain, nonatomic) NSString *userSex;
@property (retain, nonatomic) NSString *userAge;
@property (retain, nonatomic) NSDictionary *marks;
@property (nonatomic) long long scene;
@property (nonatomic) long long action;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) TSTrackedItem<TSFinalTrackedItem> *item;
@property (nonatomic) BOOL reported;
@property (retain, nonatomic) NSMutableDictionary *externals;

+ (BOOL)supportsSecureCoding;

- (BOOL)isGesturePasscode;
- (void)setIsGesturePasscode:(BOOL)a0;
- (id)initWithTrackedItem:(id)a0 scene:(long long)a1 action:(long long)a2 timestamp:(double)a3;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
