@class CNContact;

@interface BDContactsDataExtractors : NSObject

@property (retain, nonatomic) CNContact *contactRef;

- (id)localizedLabelFromOriginalValue:(id)a0;
- (id)mapMultiValueOfProperty:(id)a0 withBlock:(id /* block */)a1;
- (id)instantMessage;
- (id)websites;
- (void).cxx_destruct;
- (id)name;
- (id)birthday;
- (id)note;
- (id)job;
- (id)emails;
- (id)identifier;
- (id)socialProfiles;
- (id)addresses;
- (id)photo;
- (id)dates;
- (id)phones;
- (id)relatedPersons;

@end
