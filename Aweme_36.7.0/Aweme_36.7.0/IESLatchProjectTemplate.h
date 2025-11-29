@class NSArray, NSString;

@interface IESLatchProjectTemplate : NSObject <IESLatchConfigTemplate>

@property (retain, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
