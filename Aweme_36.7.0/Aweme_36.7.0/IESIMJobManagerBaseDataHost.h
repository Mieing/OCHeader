@class NSArray, NSString;

@interface IESIMJobManagerBaseDataHost : NSObject <IESIMJobManagerDataHost>

@property (retain) NSArray *taskMetaInfoList;
@property (retain) NSArray *fetcherList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)flushToManager:(id)a0;
- (void).cxx_destruct;

@end
