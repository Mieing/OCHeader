@class NSString;

@interface MAMapLimitEventCodeModel : NSObject

@property (retain, nonatomic) NSString *eventID;
@property (nonatomic) unsigned long long currentCount;
@property (nonatomic) unsigned long long limitCount;

+ (id)limitEventCodeModel:(id)a0 limitCount:(unsigned long long)a1;

- (void).cxx_destruct;

@end
