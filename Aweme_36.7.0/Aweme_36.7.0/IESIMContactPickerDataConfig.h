@class NSString;
@protocol IESIMContactPickerContentDataProvider;

@interface IESIMContactPickerDataConfig : NSObject <IESIMContactPickerDataConfigProtocol>

@property (retain, nonatomic) id<IESIMContactPickerContentDataProvider> dataProvider;
@property (readonly, nonatomic) long long sectionBuildType;
@property (readonly, copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) id /* block */ sectionBuilderProcessor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSectionBuildType:(long long)a0 sectionIdentifier:(id)a1 dataProvider:(id)a2;
- (void).cxx_destruct;

@end
