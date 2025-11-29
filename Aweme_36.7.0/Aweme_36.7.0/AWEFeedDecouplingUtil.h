@class NSString;

@interface AWEFeedDecouplingUtil : NSObject <AWEFeedDecouplingUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableDetailDeleteDecoupling;
+ (id)detailDecouplingLibraDic;


@end
