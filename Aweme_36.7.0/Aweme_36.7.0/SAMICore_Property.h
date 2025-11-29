@class NSObject;

@interface SAMICore_Property : NSObject

@property (nonatomic) long long type;
@property (nonatomic) int id;
@property (nonatomic) int writable;
@property (retain, nonatomic) id data;
@property (nonatomic) const char *extraInfo;
@property (retain, nonatomic) NSObject *userContext;

- (void)dealloc;

@end
