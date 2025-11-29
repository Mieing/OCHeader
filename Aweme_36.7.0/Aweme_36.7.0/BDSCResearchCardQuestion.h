@class NSString;

@interface BDSCResearchCardQuestion : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *info;
@property (readonly, nonatomic) BOOL hasUnknown;
@property (nonatomic) unsigned long long type;

+ (id)buildQuestionWithType:(unsigned long long)a0;

@end
