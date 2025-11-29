@class NSString;

@interface IESServiceEntry : NSObject <IESServiceEntryProtocol>

@property (copy, nonatomic) id /* block */ objectDidExtract;
@property (readonly, nonatomic) long long scopeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extractObject;
- (id)tryExtractObject;
- (void).cxx_destruct;

@end
