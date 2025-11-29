@class NSString;

@interface DVEDoneInfo : NSObject <DVEDoneInfoProtocol>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *from;
@property (retain, nonatomic) NSString *to;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoWithActionName:(id)a0;
+ (id)initWithJsonString:(id)a0;

@end
