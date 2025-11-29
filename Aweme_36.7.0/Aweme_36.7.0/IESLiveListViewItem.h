@class NSString;

@interface IESLiveListViewItem : NSObject <IESLiveItemProtocol>

@property (retain, nonatomic) id data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
